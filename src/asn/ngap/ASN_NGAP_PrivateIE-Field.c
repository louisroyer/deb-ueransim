/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "NGAP-Containers.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_PrivateIE-Field.h"

static int
memb_ASN_NGAP_id_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ASN_NGAP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_ASN_NGAP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_ASN_NGAP_id_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_NGAP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_NGAP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_value_specs_4 = {
	sizeof(struct ASN_NGAP_PrivateMessageIEs__value),
	offsetof(struct ASN_NGAP_PrivateMessageIEs__value, _asn_ctx),
	offsetof(struct ASN_NGAP_PrivateMessageIEs__value, present),
	sizeof(((struct ASN_NGAP_PrivateMessageIEs__value *)0)->present),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	0, 0,	/* No members */
	&asn_SPC_ASN_NGAP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_NGAP_PrivateMessageIEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_PrivateMessageIEs, id),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ASN_NGAP_PrivateIE_ID,
		0,
		{ 0, &asn_PER_memb_ASN_NGAP_id_constr_2,  memb_ASN_NGAP_id_constraint_1 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_PrivateMessageIEs, criticality),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ASN_NGAP_Criticality,
		0,
		{ 0, &asn_PER_memb_ASN_NGAP_criticality_constr_3,  memb_ASN_NGAP_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_PrivateMessageIEs, value),
		-1 /* Ambiguous tag (ANY?) */,
		0,
		&asn_DEF_ASN_NGAP_value_4,
		0,
		{ 0, &asn_PER_memb_ASN_NGAP_value_constr_4,  memb_ASN_NGAP_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_PrivateMessageIEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_PrivateMessageIEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* local */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 } /* global */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_PrivateMessageIEs_specs_1 = {
	sizeof(struct ASN_NGAP_PrivateMessageIEs),
	offsetof(struct ASN_NGAP_PrivateMessageIEs, _asn_ctx),
	asn_MAP_ASN_NGAP_PrivateMessageIEs_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_PrivateMessageIEs = {
	"PrivateMessageIEs",
	"PrivateMessageIEs",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_NGAP_PrivateMessageIEs_tags_1,
	sizeof(asn_DEF_ASN_NGAP_PrivateMessageIEs_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_PrivateMessageIEs_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_PrivateMessageIEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_PrivateMessageIEs_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_PrivateMessageIEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_NGAP_PrivateMessageIEs_1,
	3,	/* Elements count */
	&asn_SPC_ASN_NGAP_PrivateMessageIEs_specs_1	/* Additional specs */
};

