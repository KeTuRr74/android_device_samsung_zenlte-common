/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MpathIndic_H_
#define	_MpathIndic_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MpathIndic {
	MpathIndic_notMeasured	= 0,
	MpathIndic_low	= 1,
	MpathIndic_medium	= 2,
	MpathIndic_high	= 3
} e_MpathIndic;

/* MpathIndic */
typedef long	 MpathIndic_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MpathIndic;
asn_struct_free_f MpathIndic_free;
asn_struct_print_f MpathIndic_print;
asn_constr_check_f MpathIndic_constraint;
ber_type_decoder_f MpathIndic_decode_ber;
der_type_encoder_f MpathIndic_encode_der;
xer_type_decoder_f MpathIndic_decode_xer;
xer_type_encoder_f MpathIndic_encode_xer;
per_type_decoder_f MpathIndic_decode_uper;
per_type_encoder_f MpathIndic_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MpathIndic_H_ */
#include <asn_internal.h>
