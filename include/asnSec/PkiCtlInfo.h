/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CTL"
 * 	found in "CTL.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PkiCtlInfo_H_
#define	_PkiCtlInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Certificate.h"
#include <UTF8String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PkiCtlInfo */
typedef struct PkiCtlInfo {
	Certificate_t	 rootCertificate;
	UTF8String_t	*caListUrl	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PkiCtlInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PkiCtlInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_PkiCtlInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_PkiCtlInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PkiCtlInfo_H_ */
#include <asn_internal.h>
