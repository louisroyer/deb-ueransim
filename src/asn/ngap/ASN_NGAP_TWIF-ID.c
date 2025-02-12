/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_TWIF-ID.h"

#include "ASN_NGAP_ProtocolIE-SingleContainer.h"
static int
memb_ASN_NGAP_tWIF_ID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ASN_NGAP_tWIF_ID_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  32,  32 }	/* (SIZE(32..32,...)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_ASN_NGAP_TWIF_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_NGAP_TWIF_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_TWIF_ID, choice.tWIF_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ASN_NGAP_tWIF_ID_constr_2,  memb_ASN_NGAP_tWIF_ID_constraint_1 },
		0, 0, /* No default value */
		"tWIF-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_TWIF_ID, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolIE_SingleContainer_126P53,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_TWIF_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tWIF-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_TWIF_ID_specs_1 = {
	sizeof(struct ASN_NGAP_TWIF_ID),
	offsetof(struct ASN_NGAP_TWIF_ID, _asn_ctx),
	offsetof(struct ASN_NGAP_TWIF_ID, present),
	sizeof(((struct ASN_NGAP_TWIF_ID *)0)->present),
	asn_MAP_ASN_NGAP_TWIF_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_TWIF_ID = {
	"TWIF-ID",
	"TWIF-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ASN_NGAP_TWIF_ID_constr_1, CHOICE_constraint },
	asn_MBR_ASN_NGAP_TWIF_ID_1,
	2,	/* Elements count */
	&asn_SPC_ASN_NGAP_TWIF_ID_specs_1	/* Additional specs */
};

