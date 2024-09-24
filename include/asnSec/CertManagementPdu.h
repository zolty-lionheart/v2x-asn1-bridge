/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CertManagementPdu"
 * 	found in "CertManagementPdu.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CertManagementPdu_H_
#define	_CertManagementPdu_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CompositeCrl.h"
#include "CertificateChain.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CertManagementPdu_PR {
	CertManagementPdu_PR_NOTHING,	/* No components present */
	CertManagementPdu_PR_compositeCrl,
	CertManagementPdu_PR_certificateChain
	/* Extensions may appear below */
	
} CertManagementPdu_PR;

/* CertManagementPdu */
typedef struct CertManagementPdu {
	CertManagementPdu_PR present;
	union CertManagementPdu_u {
		CompositeCrl_t	 compositeCrl;
		CertificateChain_t	 certificateChain;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertManagementPdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertManagementPdu;
extern asn_CHOICE_specifics_t asn_SPC_CertManagementPdu_specs_1;
extern asn_TYPE_member_t asn_MBR_CertManagementPdu_1[2];
extern asn_per_constraints_t asn_PER_type_CertManagementPdu_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CertManagementPdu_H_ */
#include <asn_internal.h>
