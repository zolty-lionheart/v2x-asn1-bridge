/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LaMaInterfacePdu"
 * 	found in "LaMaInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "LaMaLinkageSeedResponse.h"

static int
memb_individualLSInfos_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_groupLSInfos_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_individualLSInfos_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_type_individualLSInfos_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_groupLSInfos_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_type_groupLSInfos_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_individualLSInfos_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_individualLSInfos_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_groupLSInfos_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_groupLSInfos_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_individualLSInfos_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IndividualLSInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_individualLSInfos_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_individualLSInfos_specs_4 = {
	sizeof(struct LaMaLinkageSeedResponse__individualLSInfos),
	offsetof(struct LaMaLinkageSeedResponse__individualLSInfos, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_individualLSInfos_4 = {
	"individualLSInfos",
	"individualLSInfos",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_individualLSInfos_tags_4,
	sizeof(asn_DEF_individualLSInfos_tags_4)
		/sizeof(asn_DEF_individualLSInfos_tags_4[0]) - 1, /* 1 */
	asn_DEF_individualLSInfos_tags_4,	/* Same as above */
	sizeof(asn_DEF_individualLSInfos_tags_4)
		/sizeof(asn_DEF_individualLSInfos_tags_4[0]), /* 2 */
	{ &asn_OER_type_individualLSInfos_constr_4, &asn_PER_type_individualLSInfos_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_individualLSInfos_4,
	1,	/* Single element */
	&asn_SPC_individualLSInfos_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_groupLSInfos_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GroupLSInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_groupLSInfos_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_groupLSInfos_specs_6 = {
	sizeof(struct LaMaLinkageSeedResponse__groupLSInfos),
	offsetof(struct LaMaLinkageSeedResponse__groupLSInfos, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupLSInfos_6 = {
	"groupLSInfos",
	"groupLSInfos",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_groupLSInfos_tags_6,
	sizeof(asn_DEF_groupLSInfos_tags_6)
		/sizeof(asn_DEF_groupLSInfos_tags_6[0]) - 1, /* 1 */
	asn_DEF_groupLSInfos_tags_6,	/* Same as above */
	sizeof(asn_DEF_groupLSInfos_tags_6)
		/sizeof(asn_DEF_groupLSInfos_tags_6[0]), /* 2 */
	{ &asn_OER_type_groupLSInfos_constr_6, &asn_PER_type_groupLSInfos_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_groupLSInfos_6,
	1,	/* Single element */
	&asn_SPC_groupLSInfos_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LaMaLinkageSeedResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LaMaLinkageSeedResponse, requestHash),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HashedId8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestHash"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaMaLinkageSeedResponse, laId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaMaLinkageSeedResponse, individualLSInfos),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_individualLSInfos_4,
		0,
		{ &asn_OER_memb_individualLSInfos_constr_4, &asn_PER_memb_individualLSInfos_constr_4,  memb_individualLSInfos_constraint_1 },
		0, 0, /* No default value */
		"individualLSInfos"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaMaLinkageSeedResponse, groupLSInfos),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_groupLSInfos_6,
		0,
		{ &asn_OER_memb_groupLSInfos_constr_6, &asn_PER_memb_groupLSInfos_constr_6,  memb_groupLSInfos_constraint_1 },
		0, 0, /* No default value */
		"groupLSInfos"
		},
};
static const ber_tlv_tag_t asn_DEF_LaMaLinkageSeedResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LaMaLinkageSeedResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestHash */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* laId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* individualLSInfos */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* groupLSInfos */
};
asn_SEQUENCE_specifics_t asn_SPC_LaMaLinkageSeedResponse_specs_1 = {
	sizeof(struct LaMaLinkageSeedResponse),
	offsetof(struct LaMaLinkageSeedResponse, _asn_ctx),
	asn_MAP_LaMaLinkageSeedResponse_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LaMaLinkageSeedResponse = {
	"LaMaLinkageSeedResponse",
	"LaMaLinkageSeedResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_LaMaLinkageSeedResponse_tags_1,
	sizeof(asn_DEF_LaMaLinkageSeedResponse_tags_1)
		/sizeof(asn_DEF_LaMaLinkageSeedResponse_tags_1[0]), /* 1 */
	asn_DEF_LaMaLinkageSeedResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaMaLinkageSeedResponse_tags_1)
		/sizeof(asn_DEF_LaMaLinkageSeedResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LaMaLinkageSeedResponse_1,
	4,	/* Elements count */
	&asn_SPC_LaMaLinkageSeedResponse_specs_1	/* Additional specs */
};

