/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_NGRAN-CGI.h"

#include "ASN_NGAP_NR-CGI.h"
#include "ASN_NGAP_EUTRA-CGI.h"
#include "ASN_NGAP_ProtocolIE-SingleContainer.h"
asn_per_constraints_t asn_PER_type_ASN_NGAP_NGRAN_CGI_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_NGAP_NGRAN_CGI_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_NGRAN_CGI, choice.nR_CGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_NR_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-CGI"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_NGRAN_CGI, choice.eUTRA_CGI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EUTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-CGI"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_NGRAN_CGI, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolIE_SingleContainer_126P38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_NGRAN_CGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nR-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eUTRA-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_NGRAN_CGI_specs_1 = {
	sizeof(struct ASN_NGAP_NGRAN_CGI),
	offsetof(struct ASN_NGAP_NGRAN_CGI, _asn_ctx),
	offsetof(struct ASN_NGAP_NGRAN_CGI, present),
	sizeof(((struct ASN_NGAP_NGRAN_CGI *)0)->present),
	asn_MAP_ASN_NGAP_NGRAN_CGI_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_NGRAN_CGI = {
	"NGRAN-CGI",
	"NGRAN-CGI",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ASN_NGAP_NGRAN_CGI_constr_1, CHOICE_constraint },
	asn_MBR_ASN_NGAP_NGRAN_CGI_1,
	3,	/* Elements count */
	&asn_SPC_ASN_NGAP_NGRAN_CGI_specs_1	/* Additional specs */
};

