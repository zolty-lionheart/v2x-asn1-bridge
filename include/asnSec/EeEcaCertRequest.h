/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EcaEeInterfacePdu"
 * 	found in "EcaEeInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_EeEcaCertRequest_H_
#define	_EeEcaCertRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Uint8.h"
#include "Time32.h"
#include "CertificateType.h"
#include "ToBeSignedCertificate.h"
#include <IA5String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EeEcaCertRequest */
typedef struct EeEcaCertRequest {
	Uint8_t	 version;
	Time32_t	 generationTime;
	CertificateType_t	 type;
	ToBeSignedCertificate_t	 tbsCert;
	IA5String_t	*canonicalId	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EeEcaCertRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EeEcaCertRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_EeEcaCertRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_EeEcaCertRequest_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _EeEcaCertRequest_H_ */
#include <asn_internal.h>
