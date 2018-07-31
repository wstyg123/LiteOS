#include <cpptest.h>
#include <iostream>
#include <fstream>

#include "test_ota_default.h"
#include "test_ota.h"
int main()
{
    Test::Suite ts;

//    ts.add(std::auto_ptr<Test::Suite>(new TestConnection));
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectDevice));     // mce20
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectFirmware));
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectObjectConnectivityStat));
//    ts.add(std::auto_ptr<Test::Suite>(new TestAtinyUpdateInfo));
//    ts.add(std::auto_ptr<Test::Suite>(new TestAtinyFotaState));

//    ts.add(std::auto_ptr<Test::Suite>(new TestAgenttiny));  // mce41
//    ts.add(std::auto_ptr<Test::Suite>(new TestAtinyLog));
//    ts.add(std::auto_ptr<Test::Suite>(new TestAtinyRpt));
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectLocation));
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectSecurity));
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectServer));
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectBinaryAppDataContainer));
//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectConnectivityMoni));

//    ts.add(std::auto_ptr<Test::Suite>(new TestObjectAccessControl));
//    ts.add(std::auto_ptr<Test::Suite>(new TestAtinyFotaManager));   //mce7
	ts.add(std::auto_ptr<Test::Suite>(new TestOtaDefault));
	ts.add(std::auto_ptr<Test::Suite>(new TestOta));
	
    std::ofstream html;
    html.open("Result.htm");

    Test::HtmlOutput output;
    ts.run(output);
    output.generate(html);
    html.close();
}