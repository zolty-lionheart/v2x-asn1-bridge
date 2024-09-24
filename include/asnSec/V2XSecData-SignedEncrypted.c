/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "V2XSecData-Encrypted"
 * 	found in "V2XSecData-Encrypted.asn"
 * 	`asn1c -fcompound-names`
 */

#include "V2XSecData-SignedEncrypted.h"

int
V2XSecData_SignedEncrypted_82P0_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
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
 * This type is implemented using V2XSecData_Encrypted_12P2,
 * so here we adjust the DEF accordingly.
 */
int
V2XSecData_SignedEncrypted_82P1_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
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
 * This type is implemented using V2XSecData_Encrypted_12P2,
 * so here we adjust the DEF accordingly.
 */
int
V2XSecData_SignedEncrypted_82P2_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
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
 * This type is implemented using V2XSecData_Encrypted_12P2,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_V2XSecData_SignedEncrypted_82P0_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_V2XSecData_SignedEncrypted_82P0_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_V2XSecData_SignedEncrypted_82P1_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_V2XSecData_SignedEncrypted_82P1_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_V2XSecData_SignedEncrypted_82P2_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_V2XSecData_SignedEncrypted_82P2_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_V2XSecData_SignedEncrypted_82P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_V2XSecData_SignedEncrypted_82P0 = {
	"V2XSecData-SignedEncrypted",
	"V2XSecData-SignedEncrypted",
	&asn_OP_SEQUENCE,
	asn_DEF_V2XSecData_SignedEncrypted_82P0_tags_1,
	sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P0_tags_1)
		/sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P0_tags_1[0]), /* 1 */
	asn_DEF_V2XSecData_SignedEncrypted_82P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P0_tags_1)
		/sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P0_tags_1[0]), /* 1 */
	{ &asn_OER_type_V2XSecData_SignedEncrypted_82P0_constr_1, &asn_PER_type_V2XSecData_SignedEncrypted_82P0_constr_1, V2XSecData_SignedEncrypted_82P0_constraint },
	asn_MBR_V2XSecData_1,
	2,	/* Elements count */
	&asn_SPC_V2XSecData_specs_1	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_V2XSecData_SignedEncrypted_82P1_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_V2XSecData_SignedEncrypted_82P1 = {
	"V2XSecData-SignedEncrypted",
	"V2XSecData-SignedEncrypted",
	&asn_OP_SEQUENCE,
	asn_DEF_V2XSecData_SignedEncrypted_82P1_tags_2,
	sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P1_tags_2)
		/sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P1_tags_2[0]), /* 1 */
	asn_DEF_V2XSecData_SignedEncrypted_82P1_tags_2,	/* Same as above */
	sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P1_tags_2)
		/sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P1_tags_2[0]), /* 1 */
	{ &asn_OER_type_V2XSecData_SignedEncrypted_82P1_constr_2, &asn_PER_type_V2XSecData_SignedEncrypted_82P1_constr_2, V2XSecData_SignedEncrypted_82P1_constraint },
	asn_MBR_V2XSecData_1,
	2,	/* Elements count */
	&asn_SPC_V2XSecData_specs_1	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_V2XSecData_SignedEncrypted_82P2_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_V2XSecData_SignedEncrypted_82P2 = {
	"V2XSecData-SignedEncrypted",
	"V2XSecData-SignedEncrypted",
	&asn_OP_SEQUENCE,
	asn_DEF_V2XSecData_SignedEncrypted_82P2_tags_3,
	sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P2_tags_3)
		/sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P2_tags_3[0]), /* 1 */
	asn_DEF_V2XSecData_SignedEncrypted_82P2_tags_3,	/* Same as above */
	sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P2_tags_3)
		/sizeof(asn_DEF_V2XSecData_SignedEncrypted_82P2_tags_3[0]), /* 1 */
	{ &asn_OER_type_V2XSecData_SignedEncrypted_82P2_constr_3, &asn_PER_type_V2XSecData_SignedEncrypted_82P2_constr_3, V2XSecData_SignedEncrypted_82P2_constraint },
	asn_MBR_V2XSecData_1,
	2,	/* Elements count */
	&asn_SPC_V2XSecData_specs_1	/* Additional specs */
};

