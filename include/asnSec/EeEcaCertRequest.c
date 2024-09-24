/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EcaEeInterfacePdu"
 * 	found in "EcaEeInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "EeEcaCertRequest.h"

static int
memb_version_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_tbsCert_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_memb_version_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_version_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (1..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_tbsCert_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_tbsCert_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_EeEcaCertRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EeEcaCertRequest, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint8,
		0,
		{ &asn_OER_memb_version_constr_2, &asn_PER_memb_version_constr_2,  memb_version_constraint_1 },
		0, 0, /* No default value */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EeEcaCertRequest, generationTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Time32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"generationTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EeEcaCertRequest, type),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CertificateType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EeEcaCertRequest, tbsCert),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ToBeSignedCertificate,
		0,
		{ &asn_OER_memb_tbsCert_constr_5, &asn_PER_memb_tbsCert_constr_5,  memb_tbsCert_constraint_1 },
		0, 0, /* No default value */
		"tbsCert"
		},
	{ ATF_POINTER, 1, offsetof(struct EeEcaCertRequest, canonicalId),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"canonicalId"
		},
};
static const int asn_MAP_EeEcaCertRequest_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_EeEcaCertRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EeEcaCertRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* version */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* generationTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* type */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tbsCert */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* canonicalId */
};
asn_SEQUENCE_specifics_t asn_SPC_EeEcaCertRequest_specs_1 = {
	sizeof(struct EeEcaCertRequest),
	offsetof(struct EeEcaCertRequest, _asn_ctx),
	asn_MAP_EeEcaCertRequest_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_EeEcaCertRequest_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EeEcaCertRequest = {
	"EeEcaCertRequest",
	"EeEcaCertRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_EeEcaCertRequest_tags_1,
	sizeof(asn_DEF_EeEcaCertRequest_tags_1)
		/sizeof(asn_DEF_EeEcaCertRequest_tags_1[0]), /* 1 */
	asn_DEF_EeEcaCertRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_EeEcaCertRequest_tags_1)
		/sizeof(asn_DEF_EeEcaCertRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EeEcaCertRequest_1,
	5,	/* Elements count */
	&asn_SPC_EeEcaCertRequest_specs_1	/* Additional specs */
};

