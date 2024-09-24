/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LaRaInterfacePdu"
 * 	found in "LaRaInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_LaRaInterfacePdu_H_
#define	_LaRaInterfacePdu_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PraLaLinkageValueRequest.h"
#include "LaPraLinkageValueResponse.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaRaInterfacePdu_PR {
	LaRaInterfacePdu_PR_NOTHING,	/* No components present */
	LaRaInterfacePdu_PR_praLaLinkageValueRequest,
	LaRaInterfacePdu_PR_laPraLinkageValueResponse
	/* Extensions may appear below */
	
} LaRaInterfacePdu_PR;

/* LaRaInterfacePdu */
typedef struct LaRaInterfacePdu {
	LaRaInterfacePdu_PR present;
	union LaRaInterfacePdu_u {
		PraLaLinkageValueRequest_t	 praLaLinkageValueRequest;
		LaPraLinkageValueResponse_t	 laPraLinkageValueResponse;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaRaInterfacePdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaRaInterfacePdu;
extern asn_CHOICE_specifics_t asn_SPC_LaRaInterfacePdu_specs_1;
extern asn_TYPE_member_t asn_MBR_LaRaInterfacePdu_1[2];
extern asn_per_constraints_t asn_PER_type_LaRaInterfacePdu_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LaRaInterfacePdu_H_ */
#include <asn_internal.h>
