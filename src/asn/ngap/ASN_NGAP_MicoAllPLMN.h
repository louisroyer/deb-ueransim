/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_MicoAllPLMN_H_
#define	_ASN_NGAP_MicoAllPLMN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_MicoAllPLMN {
	ASN_NGAP_MicoAllPLMN_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_MicoAllPLMN;

/* ASN_NGAP_MicoAllPLMN */
typedef long	 ASN_NGAP_MicoAllPLMN_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_MicoAllPLMN_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_MicoAllPLMN;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_NGAP_MicoAllPLMN_specs_1;
asn_struct_free_f ASN_NGAP_MicoAllPLMN_free;
asn_struct_print_f ASN_NGAP_MicoAllPLMN_print;
asn_constr_check_f ASN_NGAP_MicoAllPLMN_constraint;
ber_type_decoder_f ASN_NGAP_MicoAllPLMN_decode_ber;
der_type_encoder_f ASN_NGAP_MicoAllPLMN_encode_der;
xer_type_decoder_f ASN_NGAP_MicoAllPLMN_decode_xer;
xer_type_encoder_f ASN_NGAP_MicoAllPLMN_encode_xer;
per_type_decoder_f ASN_NGAP_MicoAllPLMN_decode_uper;
per_type_encoder_f ASN_NGAP_MicoAllPLMN_encode_uper;
per_type_decoder_f ASN_NGAP_MicoAllPLMN_decode_aper;
per_type_encoder_f ASN_NGAP_MicoAllPLMN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_MicoAllPLMN_H_ */
#include <asn_internal.h>
