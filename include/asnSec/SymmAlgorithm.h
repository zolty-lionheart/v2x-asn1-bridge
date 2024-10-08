/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SymmAlgorithm_H_
#define	_SymmAlgorithm_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SymmAlgorithm {
	SymmAlgorithm_aes128Ccm	= 0,
	/*
	 * Enumeration is extensible
	 */
	SymmAlgorithm_sm4Ccm	= 1
} e_SymmAlgorithm;

/* SymmAlgorithm */
typedef long	 SymmAlgorithm_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SymmAlgorithm_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SymmAlgorithm;
extern const asn_INTEGER_specifics_t asn_SPC_SymmAlgorithm_specs_1;
asn_struct_free_f SymmAlgorithm_free;
asn_struct_print_f SymmAlgorithm_print;
asn_constr_check_f SymmAlgorithm_constraint;
ber_type_decoder_f SymmAlgorithm_decode_ber;
der_type_encoder_f SymmAlgorithm_encode_der;
xer_type_decoder_f SymmAlgorithm_decode_xer;
xer_type_encoder_f SymmAlgorithm_encode_xer;
oer_type_decoder_f SymmAlgorithm_decode_oer;
oer_type_encoder_f SymmAlgorithm_encode_oer;
per_type_decoder_f SymmAlgorithm_decode_uper;
per_type_encoder_f SymmAlgorithm_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SymmAlgorithm_H_ */
#include <asn_internal.h>
