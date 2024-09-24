/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "V2XSecData-Encrypted"
 * 	found in "V2XSecData-Encrypted.asn"
 * 	`asn1c -fcompound-names`
 */

#include "SignerSingleCert.h"

int
SignerSingleCert_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using SignerIdentifier,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SignerSingleCert_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_SignerSingleCert_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_descriptor_t asn_DEF_SignerSingleCert = {
	"SignerSingleCert",
	"SignerSingleCert",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_SignerSingleCert_constr_1, &asn_PER_type_SignerSingleCert_constr_1, SignerSingleCert_constraint },
	asn_MBR_SignerIdentifier_1,
	4,	/* Elements count */
	&asn_SPC_SignerIdentifier_specs_1	/* Additional specs */
};

