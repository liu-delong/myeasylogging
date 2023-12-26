#include "easylogging++.h"
#include <thread>
using namespace std;
INITIALIZE_EASYLOGGINGPP
void func1()
{
   LOG(DEBUG)<<"hhh";
}
int main(int argc, char* argv[]) {
   load_log_conf;
   ldebug<<"debug";
   linfo<<"info";
   lwarn<<"warn";
   lerror<<"error";
   //lfatal<<"fatal";  //这个级别的日志会导致调用abort

   //auto t=thread(func1);
   //LOG(DEBUG)<<this_thread::get_id();
   //t.join();
   return 0;
}