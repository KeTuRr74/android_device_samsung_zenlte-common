/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../supl-triggered-start.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_AreaIdSetType_H_
#define	_AreaIdSetType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AreaIdSetType {
	AreaIdSetType_border	= 0,
	AreaIdSetType_within	= 1
	/*
	 * Enumeration is extensible
	 */
} e_AreaIdSetType;

/* AreaIdSetType */
typedef long	 AreaIdSetType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaIdSetType;
asn_struct_free_f AreaIdSetType_free;
asn_struct_print_f AreaIdSetType_print;
asn_constr_check_f AreaIdSetType_constraint;
ber_type_decoder_f AreaIdSetType_decode_ber;
der_type_encoder_f AreaIdSetType_encode_der;
xer_type_decoder_f AreaIdSetType_decode_xer;
xer_type_encoder_f AreaIdSetType_encode_xer;
per_type_decoder_f AreaIdSetType_decode_uper;
per_type_encoder_f AreaIdSetType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaIdSetType_H_ */
#include <asn_internal.h>
