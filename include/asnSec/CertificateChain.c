/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CertManagementPdu"
 * 	found in "CertManagementPdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "CertificateChain.h"

static int
memb_others_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_others_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_type_others_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_others_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_others_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_others_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Certificate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_others_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_others_specs_2 = {
	sizeof(struct CertificateChain__others),
	offsetof(struct CertificateChain__others, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_others_2 = {
	"others",
	"others",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_others_tags_2,
	sizeof(asn_DEF_others_tags_2)
		/sizeof(asn_DEF_others_tags_2[0]) - 1, /* 1 */
	asn_DEF_others_tags_2,	/* Same as above */
	sizeof(asn_DEF_others_tags_2)
		/sizeof(asn_DEF_others_tags_2[0]), /* 2 */
	{ &asn_OER_type_others_constr_2, &asn_PER_type_others_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_others_2,
	1,	/* Single element */
	&asn_SPC_others_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CertificateChain_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CertificateChain, others),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_others_2,
		0,
		{ &asn_OER_memb_others_constr_2, &asn_PER_memb_others_constr_2,  memb_others_constraint_1 },
		0, 0, /* No default value */
		"others"
		},
};
static const ber_tlv_tag_t asn_DEF_CertificateChain_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CertificateChain_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* others */
};
asn_SEQUENCE_specifics_t asn_SPC_CertificateChain_specs_1 = {
	sizeof(struct CertificateChain),
	offsetof(struct CertificateChain, _asn_ctx),
	asn_MAP_CertificateChain_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CertificateChain = {
	"CertificateChain",
	"CertificateChain",
	&asn_OP_SEQUENCE,
	asn_DEF_CertificateChain_tags_1,
	sizeof(asn_DEF_CertificateChain_tags_1)
		/sizeof(asn_DEF_CertificateChain_tags_1[0]), /* 1 */
	asn_DEF_CertificateChain_tags_1,	/* Same as above */
	sizeof(asn_DEF_CertificateChain_tags_1)
		/sizeof(asn_DEF_CertificateChain_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CertificateChain_1,
	1,	/* Elements count */
	&asn_SPC_CertificateChain_specs_1	/* Additional specs */
};

