#include "Log.h"
#include <fstream>

namespace Log {
	LOG getlog( wchar_t logfile[] )
	{
		try
		{
			LOG log;
			std::ofstream fout;
			fout.open( logfile );
			wcscpy(log.logfile, logfile);
			log.stram = &fout;
			throw  ERROR_THROW(LOG_FILE_CREATING_ERROR_ID);
		}
	}


}