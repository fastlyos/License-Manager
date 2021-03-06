#ifndef GET_PC_INFO_H
#define GET_PC_INFO_H
#include <string>
#include <vector>
#include "../json_convert/json.hpp"
using namespace std;
using json=nlohmann::json;

class Extract {
public:
	Extract();
	Extract(string key);
	string get_key();
	json get_hardware_info();
	string get_computer_name();
	string get_user_name();
	int load(string output_dir_pc);
private:
	string _key;
	vector<string> execCmd(const char *cmd);
	vector<string> getHardDiskInfo();
	vector<string> getMacInfo();
	json add_os_info(json j);
	string my_encryption(json j);
};
#endif
