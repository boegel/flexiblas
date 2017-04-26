/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Martin Koehler, 2015-2017
 */
 /* This file it automatically generated. Please do not edit. */
 /* Generated: Tue Mar 28 16:07:35 2017 */ 
        
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "fortran_mangle.h"

#include "flexiblas.h"


#ifdef INTEGER8
#define blasint int64_t
#else 
#define blasint int 
#endif



#ifdef FLEXIBLAS_ABI_INTEL 
void FC_GLOBAL(sggsvp3,SGGSVP3)(char* jobu, char* jobv, char* jobq, blasint* m, blasint* p, blasint* n, float* a, blasint* lda, float* b, blasint* ldb, float* tola, float* tolb, blasint* k, blasint* l, float* u, blasint* ldu, float* v, blasint* ldv, float* q, blasint* ldq, blasint* iwork, float* tau, float* work, blasint* lwork, blasint* info)
#else
void FC_GLOBAL(sggsvp3,SGGSVP3)(char* jobu, char* jobv, char* jobq, blasint* m, blasint* p, blasint* n, float* a, blasint* lda, float* b, blasint* ldb, float* tola, float* tolb, blasint* k, blasint* l, float* u, blasint* ldu, float* v, blasint* ldv, float* q, blasint* ldq, blasint* iwork, float* tau, float* work, blasint* lwork, blasint* info)
#endif 
{
    double ts;
	void (*fn) (void* jobu, void* jobv, void* jobq, void* m, void* p, void* n, void* a, void* lda, void* b, void* ldb, void* tola, void* tolb, void* k, void* l, void* u, void* ldu, void* v, void* ldv, void* q, void* ldq, void* iwork, void* tau, void* work, void* lwork, void* info);
	if ( current_backend->post_init != 0 ) {
		__flexiblas_backend_init(current_backend); 
		current_backend->post_init = 0; 
	}
	fn = current_backend->lapack.sggsvp3.call_fblas; 
	if ( __flexiblas_profile ) {
		ts = flexiblas_wtime(); 
		fn((void*) jobu, (void*) jobv, (void*) jobq, (void*) m, (void*) p, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) tola, (void*) tolb, (void*) k, (void*) l, (void*) u, (void*) ldu, (void*) v, (void*) ldv, (void*) q, (void*) ldq, (void*) iwork, (void*) tau, (void*) work, (void*) lwork, (void*) info); 
		current_backend->lapack.sggsvp3.timings[0] += (flexiblas_wtime() -ts);
		current_backend->lapack.sggsvp3.calls[0]++;
	} else { 
		fn((void*) jobu, (void*) jobv, (void*) jobq, (void*) m, (void*) p, (void*) n, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) tola, (void*) tolb, (void*) k, (void*) l, (void*) u, (void*) ldu, (void*) v, (void*) ldv, (void*) q, (void*) ldq, (void*) iwork, (void*) tau, (void*) work, (void*) lwork, (void*) info); 
	} 
	return;
}
#ifdef FLEXIBLAS_ABI_IBM
void sggsvp3_(char* jobu, char* jobv, char* jobq, blasint* m, blasint* p, blasint* n, float* a, blasint* lda, float* b, blasint* ldb, float* tola, float* tolb, blasint* k, blasint* l, float* u, blasint* ldu, float* v, blasint* ldv, float* q, blasint* ldq, blasint* iwork, float* tau, float* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sggsvp3,SGGSVP3)))));
#else
void sggsvp3(char* jobu, char* jobv, char* jobq, blasint* m, blasint* p, blasint* n, float* a, blasint* lda, float* b, blasint* ldb, float* tola, float* tolb, blasint* k, blasint* l, float* u, blasint* ldu, float* v, blasint* ldv, float* q, blasint* ldq, blasint* iwork, float* tau, float* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sggsvp3,SGGSVP3)))));
#endif


