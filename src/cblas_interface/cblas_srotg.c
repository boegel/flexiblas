/* $Id: hooks.h 3741 2013-10-01 12:54:54Z komart $ */
/* 
 Copyright (C) 2013  Martin Köhler, koehlerm@mpi-magdeburg.mpg.de

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "cblas.h"
#include "cblas_f77.h"
#include "../hooks.h"


void cblas_srotg(  float *a, float *b, float *c, float *s)
{
#ifdef FLEXIBLAS_PROFILE
   flexiblas_call_srotg[POS_CBLAS] ++;
#endif 

   if ( flexiblas_srotg.call_cblas != NULL ) {
#ifdef FLEXIBLAS_PROFILE
	   double te, ts = flexiblas_wtime(); 
#endif
	   void (*fn)(float *, float *, float *, float *)
		   = flexiblas_srotg.call_cblas;
	   fn(a,b,c,s); 
#ifdef FLEXIBLAS_PROFILE
	   te = flexiblas_wtime(); 
	   flexiblas_time_srotg[POS_CBLAS] += (te - ts); 
#endif
   } else {
	F77_srotg(a,b,c,s);    
   }
   return; 
}
