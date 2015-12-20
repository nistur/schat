#include "schat-tests.h"
#include "schat.h"

TEST(InitTerminate, Basic, 0.0f,
     // initialisation
     {
	 m_data.context = 0;
     },
     // cleanup
     {
	 schatTerminateContext(&m_data.context);
     },
     // test
     {
	 ASSERT(schatInitContext(&m_data.context) == SCHAT_SUCCESS);
      ASSERT(m_data.context != 0);
	 ASSERT(schatTerminateContext(&m_data.context) == SCHAT_SUCCESS);
      ASSERT(m_data.context == 0)
     },
     // data
     {
	 schatContext* context;
     }
    );
