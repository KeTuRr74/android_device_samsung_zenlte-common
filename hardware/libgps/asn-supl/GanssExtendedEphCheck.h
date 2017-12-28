/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp-version2-parameter-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_GanssExtendedEphCheck_H_
#define	_GanssExtendedEphCheck_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GANSSextEphTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GanssExtendedEphCheck */
typedef struct GanssExtendedEphCheck {
	GANSSextEphTime_t	 beginTime;
	GANSSextEphTime_t	 endTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GanssExtendedEphCheck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GanssExtendedEphCheck;

#ifdef __cplusplus
}
#endif

#endif	/* _GanssExtendedEphCheck_H_ */
#include <asn_internal.h>
