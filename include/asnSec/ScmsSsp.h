/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ScmsSsp"
 * 	found in "ScmsSsp.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ScmsSsp_H_
#define	_ScmsSsp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RootCaSsp.h"
#include "MaSsp.h"
#include "PgSsp.h"
#include "IcaSsp.h"
#include "EcaSsp.h"
#include "CraSsp.h"
#include "DcmSsp.h"
#include "AcaSsp.h"
#include "LaSsp.h"
#include "RaSsp.h"
#include "EeSsp.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ScmsSsp_PR {
	ScmsSsp_PR_NOTHING,	/* No components present */
	ScmsSsp_PR_root,
	ScmsSsp_PR_ma,
	ScmsSsp_PR_pg,
	ScmsSsp_PR_ica,
	ScmsSsp_PR_eca,
	ScmsSsp_PR_cra,
	ScmsSsp_PR_dcm,
	ScmsSsp_PR_aca,
	ScmsSsp_PR_la,
	ScmsSsp_PR_ra,
	ScmsSsp_PR_ee
	/* Extensions may appear below */
	
} ScmsSsp_PR;

/* ScmsSsp */
typedef struct ScmsSsp {
	ScmsSsp_PR present;
	union ScmsSsp_u {
		RootCaSsp_t	 root;
		MaSsp_t	 ma;
		PgSsp_t	 pg;
		IcaSsp_t	 ica;
		EcaSsp_t	 eca;
		CraSsp_t	 cra;
		DcmSsp_t	 dcm;
		AcaSsp_t	 aca;
		LaSsp_t	 la;
		RaSsp_t	 ra;
		EeSsp_t	 ee;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ScmsSsp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ScmsSsp;

#ifdef __cplusplus
}
#endif

#endif	/* _ScmsSsp_H_ */
#include <asn_internal.h>
