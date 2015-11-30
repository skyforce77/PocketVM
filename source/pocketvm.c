/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 16

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Cpu102007 Cpu102007;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU64 TY102009[16];
typedef NIM_BOOL TY102012[8];
struct  Cpu102007  {
TY102009 registers;
TY102012 flags;
NI64 cursor;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, load_102015)(Cpu102007* this_102018, NimStringDesc* filename);
N_NIMCALL(void, start_102637)(Cpu102007* this_102640);
N_NIMCALL(NI64, buffersize_98023)(void);
N_NIMCALL(void, exec_102630)(Cpu102007* this_102633);
N_NIMCALL(NU8, readbyte_102024)(Cpu102007* this_102027);
N_NIMCALL(NIM_CHAR, bufferread_98032)(NI64 index);
N_NIMCALL(void, execmove_102285)(Cpu102007* this_102288);
N_NIMCALL(NU64, readvalueforregister_102197)(Cpu102007* this_102200);
N_NIMCALL(NU64, readregister_102185)(Cpu102007* this_102188);
N_NIMCALL(NU16, readshort_102124)(Cpu102007* this_102127);
N_NIMCALL(NU64, readnbytes_102063)(Cpu102007* this_102066, NI n);
N_NIMCALL(NU32, readint_102133)(Cpu102007* this_102136);
N_NIMCALL(NU64, readlong_102142)(Cpu102007* this_102145);
N_NIMCALL(void, writeregister_102206)(Cpu102007* this_102209, NU64 value);
N_NIMCALL(void, execadd_102294)(Cpu102007* this_102297);
N_NIMCALL(void, execsub_102314)(Cpu102007* this_102317);
N_NIMCALL(void, execmul_102334)(Cpu102007* this_102337);
N_NIMCALL(void, execdiv_102354)(Cpu102007* this_102357);
N_NIMCALL(void, execmod_102374)(Cpu102007* this_102377);
N_NIMCALL(void, execshiftleft_102394)(Cpu102007* this_102397);
N_NIMCALL(void, execshiftright_102414)(Cpu102007* this_102417);
N_NIMCALL(void, execand_102434)(Cpu102007* this_102437);
N_NIMCALL(void, execor_102454)(Cpu102007* this_102457);
N_NIMCALL(void, execxor_102474)(Cpu102007* this_102477);
N_NIMCALL(void, execnot_102494)(Cpu102007* this_102497);
N_NIMCALL(void, execprint_102252)(Cpu102007* this_102255);
N_NIMCALL(NimStringDesc*, readstring_102150)(Cpu102007* this_102153);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, execputchar_102259)(Cpu102007* this_102262);
N_NIMCALL(NIM_CHAR, readchar_102044)(Cpu102007* this_102047);
N_NIMCALL(void, execgetchar_102267)(Cpu102007* this_102270);
N_NIMCALL(void, execjump_102275)(Cpu102007* this_102278);
N_NIMCALL(void, execifeq_102510)(Cpu102007* this_102513);
N_NIMCALL(void, zapbytes_102217)(Cpu102007* this_102220, NI number);
N_NIMCALL(void, execifne_102530)(Cpu102007* this_102533);
N_NIMCALL(void, execiflt_102550)(Cpu102007* this_102553);
N_NIMCALL(void, execifgt_102570)(Cpu102007* this_102573);
N_NIMCALL(void, execifle_102590)(Cpu102007* this_102593);
N_NIMCALL(void, execifge_102610)(Cpu102007* this_102613);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_memoryInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_memoryDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_instructionsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_instructionsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmtypesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmtypesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_flagsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_flagsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, pocketvmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, pocketvmDatInit000)(void);
STRING_LITERAL(TMP17, "testpvm", 7);
STRING_LITERAL(TMP18, "", 0);
Cpu102007 cpu_102654;

N_NIMCALL(NIM_BOOL, load_102015)(Cpu102007* this_102018, NimStringDesc* filename) {
	NIM_BOOL result;
{	result = 0;
	result = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, readbyte_102024)(Cpu102007* this_102027) {
	NU8 result;
	NU8 typ;
	NIM_CHAR LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = bufferread_98032((*this_102027).cursor);
	typ = ((NU8) (((NU8)(LOC1))));
	(*this_102027).cursor += ((NI) 1);
	result = typ;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU64, readregister_102185)(Cpu102007* this_102188) {
	NU64 result;
	NI intid;
	NU8 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102188);
	intid = ((NI) (LOC1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = (((NI) 0) <= intid);
		if (!(LOC4)) goto LA5;
		LOC4 = (intid <= ((NI) 15));
		LA5: ;
		if (!LOC4) goto LA6;
		result = (*this_102188).registers[(intid)- 0];
		goto BeforeRet;
	}
	goto LA2;
	LA6: ;
	{
		result = 0ULL;
		goto BeforeRet;
	}
	LA2: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU64, readnbytes_102063)(Cpu102007* this_102066, NI n) {
	NU64 result;
	NU64 value;
{	result = 0;
	value = 0ULL;
	{
		NI i_102081;
		NI HEX3Atmp_102105;
		NI res_102108;
		i_102081 = 0;
		HEX3Atmp_102105 = 0;
		HEX3Atmp_102105 = (NI)(n - ((NI) 1));
		res_102108 = HEX3Atmp_102105;
		{
			while (1) {
				NU64 nvalue;
				NU8 LOC4;
				if (!(((NI) 0) <= res_102108)) goto LA3;
				i_102081 = res_102108;
				LOC4 = 0;
				LOC4 = readbyte_102024(this_102066);
				nvalue = ((NU64) (LOC4));
				nvalue = (NU64)((NU64)(nvalue) << (NU64)(((NU64) ((NI)(((NI) 8) * i_102081)))));
				value = (NU64)((NU64)(value) + (NU64)(nvalue));
				res_102108 -= ((NI) 1);
			} LA3: ;
		}
	}
	result = value;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, readshort_102124)(Cpu102007* this_102127) {
	NU16 result;
	NU64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = readnbytes_102063(this_102127, ((NI) 2));
	result = ((NU16) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU32, readint_102133)(Cpu102007* this_102136) {
	NU32 result;
	NU64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = readnbytes_102063(this_102136, ((NI) 4));
	result = ((NU32) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU64, readlong_102142)(Cpu102007* this_102145) {
	NU64 result;
{	result = 0;
	result = readnbytes_102063(this_102145, ((NI) 8));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU64, readvalueforregister_102197)(Cpu102007* this_102200) {
	NU64 result;
	NU8 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102200);
	switch (LOC1) {
	case ((NU8) 1):
	{
		result = readregister_102185(this_102200);
		goto BeforeRet;
	}
	break;
	case ((NU8) 3):
	{
		NU8 LOC4;
		LOC4 = 0;
		LOC4 = readbyte_102024(this_102200);
		result = ((NU64) (LOC4));
		goto BeforeRet;
	}
	break;
	case ((NU8) 4):
	{
		NU16 LOC6;
		LOC6 = 0;
		LOC6 = readshort_102124(this_102200);
		result = ((NU64) (LOC6));
		goto BeforeRet;
	}
	break;
	case ((NU8) 5):
	{
		NU32 LOC8;
		LOC8 = 0;
		LOC8 = readint_102133(this_102200);
		result = ((NU64) (LOC8));
		goto BeforeRet;
	}
	break;
	case ((NU8) 6):
	{
		result = readlong_102142(this_102200);
		goto BeforeRet;
	}
	break;
	default:
	{
		result = 0ULL;
		goto BeforeRet;
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, writeregister_102206)(Cpu102007* this_102209, NU64 value) {
	NI intid;
	NU8 LOC1;
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102209);
	intid = ((NI) (LOC1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = (((NI) 0) <= intid);
		if (!(LOC4)) goto LA5;
		LOC4 = (intid <= ((NI) 15));
		LA5: ;
		if (!LOC4) goto LA6;
		(*this_102209).registers[(intid)- 0] = value;
	}
	goto LA2;
	LA6: ;
	{
	}
	LA2: ;
}

N_NIMCALL(void, execmove_102285)(Cpu102007* this_102288) {
	NU64 tomove;
	NU8 LOC1;
	tomove = readvalueforregister_102197(this_102288);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102288);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102288, tomove);
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execadd_102294)(Cpu102007* this_102297) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102297);
	arg2 = readvalueforregister_102197(this_102297);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102297);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102297, (NU64)((NU64)(arg1) + (NU64)(arg2)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execsub_102314)(Cpu102007* this_102317) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102317);
	arg2 = readvalueforregister_102197(this_102317);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102317);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102317, (NU64)((NU64)(arg1) - (NU64)(arg2)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execmul_102334)(Cpu102007* this_102337) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102337);
	arg2 = readvalueforregister_102197(this_102337);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102337);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102337, (NU64)((NU64)(arg1) * (NU64)(arg2)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execdiv_102354)(Cpu102007* this_102357) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102357);
	arg2 = readvalueforregister_102197(this_102357);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102357);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102357, (NU64)((NU64)(arg1) / (NU64)(arg2)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execmod_102374)(Cpu102007* this_102377) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102377);
	arg2 = readvalueforregister_102197(this_102377);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102377);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102377, (NU64)((NU64)(arg1) % (NU64)(arg2)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execshiftleft_102394)(Cpu102007* this_102397) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102397);
	arg2 = readvalueforregister_102197(this_102397);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102397);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102397, (NU64)((NU64)(arg1) << (NU64)(arg2)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execshiftright_102414)(Cpu102007* this_102417) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102417);
	arg2 = readvalueforregister_102197(this_102417);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102417);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102417, (NU64)((NU64)(arg1) >> (NU64)(arg2)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execand_102434)(Cpu102007* this_102437) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102437);
	arg2 = readvalueforregister_102197(this_102437);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102437);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102437, (NU64)(arg1 & arg2));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execor_102454)(Cpu102007* this_102457) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102457);
	arg2 = readvalueforregister_102197(this_102457);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102457);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102457, (NU64)(arg1 | arg2));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execxor_102474)(Cpu102007* this_102477) {
	NU64 arg1;
	NU64 arg2;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102477);
	arg2 = readvalueforregister_102197(this_102477);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102477);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102477, (NU64)(arg1 ^ arg2));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execnot_102494)(Cpu102007* this_102497) {
	NU64 arg1;
	NU8 LOC1;
	arg1 = readvalueforregister_102197(this_102497);
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102497);
	switch (LOC1) {
	case ((NU8) 1):
	{
		writeregister_102206(this_102497, (NU64)((NU64) ~(arg1)));
	}
	break;
	default:
	{
	}
	break;
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, readstring_102150)(Cpu102007* this_102153) {
	NimStringDesc* result;
	NimStringDesc* str;
{	result = 0;
	str = copyString(((NimStringDesc*) &TMP18));
	{
		while (1) {
			NIM_CHAR LOC3;
			NimStringDesc* LOC4;
			NIM_CHAR LOC5;
			LOC3 = 0;
			LOC3 = bufferread_98032((*this_102153).cursor);
			if (!!(((NU8)(LOC3) == (NU8)(0)))) goto LA2;
			LOC4 = 0;
			LOC5 = 0;
			LOC5 = bufferread_98032((*this_102153).cursor);
			LOC4 = rawNewString(str->Sup.len + 1);
appendString(LOC4, str);
appendChar(LOC4, LOC5);
			str = LOC4;
			(*this_102153).cursor += ((NI) 1);
		} LA2: ;
	}
	(*this_102153).cursor += ((NI) 1);
	result = copyString(str);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, execprint_102252)(Cpu102007* this_102255) {
	NU8 LOC1;
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102255);
	switch (LOC1) {
	case ((NU8) 2):
	{
		NimStringDesc* LOC3;
		LOC3 = 0;
		LOC3 = readstring_102150(this_102255);
		printf("%s", LOC3->data);
	}
	break;
	case ((NU8) 3):
	{
		NU8 LOC5;
		LOC5 = 0;
		LOC5 = readbyte_102024(this_102255);
		printf("%d", LOC5);
	}
	break;
	case ((NU8) 1):
	{
		NU64 LOC7;
		LOC7 = 0;
		LOC7 = readregister_102185(this_102255);
		printf("%d", LOC7);
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(NIM_CHAR, readchar_102044)(Cpu102007* this_102047) {
	NIM_CHAR result;
	NIM_CHAR typ;
{	result = 0;
	typ = bufferread_98032((*this_102047).cursor);
	(*this_102047).cursor += ((NI) 1);
	result = typ;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, execputchar_102259)(Cpu102007* this_102262) {
	NU8 LOC1;
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102262);
	switch (LOC1) {
	case ((NU8) 3):
	{
		NIM_CHAR LOC3;
		LOC3 = 0;
		LOC3 = readchar_102044(this_102262);
		printf("%c", LOC3);
	}
	break;
	case ((NU8) 1):
	{
		NU64 LOC5;
		LOC5 = 0;
		LOC5 = readregister_102185(this_102262);
		printf("%c", ((NIM_CHAR) (LOC5)));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execgetchar_102267)(Cpu102007* this_102270) {
	NU8 LOC1;
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102270);
	switch (LOC1) {
	case ((NU8) 1):
	{
		char LOC3;
		LOC3 = 0;
		LOC3 = getchar();
		writeregister_102206(this_102270, ((NU64) (((NU8)(LOC3)))));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, execjump_102275)(Cpu102007* this_102278) {
	NU64 pointer;
	pointer = readvalueforregister_102197(this_102278);
	(*this_102278).cursor = ((NI64) (pointer));
}

N_NIMCALL(void, zapbytes_102217)(Cpu102007* this_102220, NI number) {
	{
		NI i_102232;
		NI res_102236;
		i_102232 = 0;
		res_102236 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR LOC4;
				if (!(res_102236 <= number)) goto LA3;
				i_102232 = res_102236;
				LOC4 = 0;
				LOC4 = readchar_102044(this_102220);
				res_102236 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, execifeq_102510)(Cpu102007* this_102513) {
	NU64 arg1;
	NU64 arg2;
	arg1 = readvalueforregister_102197(this_102513);
	arg2 = readvalueforregister_102197(this_102513);
	{
		if (!(arg1 == arg2)) goto LA3;
		zapbytes_102217(this_102513, ((NI) 9));
	}
	LA3: ;
}

N_NIMCALL(void, execifne_102530)(Cpu102007* this_102533) {
	NU64 arg1;
	NU64 arg2;
	arg1 = readvalueforregister_102197(this_102533);
	arg2 = readvalueforregister_102197(this_102533);
	{
		if (!!((arg1 == arg2))) goto LA3;
		zapbytes_102217(this_102533, ((NI) 9));
	}
	LA3: ;
}

N_NIMCALL(void, execiflt_102550)(Cpu102007* this_102553) {
	NU64 arg1;
	NU64 arg2;
	arg1 = readvalueforregister_102197(this_102553);
	arg2 = readvalueforregister_102197(this_102553);
	{
		if (!((NU64)(arg1) < (NU64)(arg2))) goto LA3;
		zapbytes_102217(this_102553, ((NI) 9));
	}
	LA3: ;
}

N_NIMCALL(void, execifgt_102570)(Cpu102007* this_102573) {
	NU64 arg1;
	NU64 arg2;
	arg1 = readvalueforregister_102197(this_102573);
	arg2 = readvalueforregister_102197(this_102573);
	{
		if (!((NU64)(arg2) < (NU64)(arg1))) goto LA3;
		zapbytes_102217(this_102573, ((NI) 9));
	}
	LA3: ;
}

N_NIMCALL(void, execifle_102590)(Cpu102007* this_102593) {
	NU64 arg1;
	NU64 arg2;
	arg1 = readvalueforregister_102197(this_102593);
	arg2 = readvalueforregister_102197(this_102593);
	{
		if (!((NU64)(arg1) <= (NU64)(arg2))) goto LA3;
		zapbytes_102217(this_102593, ((NI) 9));
	}
	LA3: ;
}

N_NIMCALL(void, execifge_102610)(Cpu102007* this_102613) {
	NU64 arg1;
	NU64 arg2;
	arg1 = readvalueforregister_102197(this_102613);
	arg2 = readvalueforregister_102197(this_102613);
	{
		if (!((NU64)(arg2) <= (NU64)(arg1))) goto LA3;
		zapbytes_102217(this_102613, ((NI) 9));
	}
	LA3: ;
}

N_NIMCALL(void, exec_102630)(Cpu102007* this_102633) {
	NU8 LOC1;
	LOC1 = 0;
	LOC1 = readbyte_102024(this_102633);
	switch (LOC1) {
	case ((NU8) 16):
	{
		execmove_102285(this_102633);
	}
	break;
	case ((NU8) 49):
	{
		execadd_102294(this_102633);
	}
	break;
	case ((NU8) 50):
	{
		execsub_102314(this_102633);
	}
	break;
	case ((NU8) 51):
	{
		execmul_102334(this_102633);
	}
	break;
	case ((NU8) 52):
	{
		execdiv_102354(this_102633);
	}
	break;
	case ((NU8) 53):
	{
		execmod_102374(this_102633);
	}
	break;
	case ((NU8) 64):
	{
		execshiftleft_102394(this_102633);
	}
	break;
	case ((NU8) 65):
	{
		execshiftright_102414(this_102633);
	}
	break;
	case ((NU8) 66):
	{
		execand_102434(this_102633);
	}
	break;
	case ((NU8) 67):
	{
		execor_102454(this_102633);
	}
	break;
	case ((NU8) 68):
	{
		execxor_102474(this_102633);
	}
	break;
	case ((NU8) 69):
	{
		execnot_102494(this_102633);
	}
	break;
	case ((NU8) 255):
	{
		execprint_102252(this_102633);
	}
	break;
	case ((NU8) 254):
	{
		execputchar_102259(this_102633);
	}
	break;
	case ((NU8) 253):
	{
		execgetchar_102267(this_102633);
	}
	break;
	case ((NU8) 32):
	{
		execjump_102275(this_102633);
	}
	break;
	case ((NU8) 33):
	{
		execifeq_102510(this_102633);
	}
	break;
	case ((NU8) 34):
	{
		execifne_102530(this_102633);
	}
	break;
	case ((NU8) 36):
	{
		execiflt_102550(this_102633);
	}
	break;
	case ((NU8) 35):
	{
		execifgt_102570(this_102633);
	}
	break;
	case ((NU8) 38):
	{
		execifle_102590(this_102633);
	}
	break;
	case ((NU8) 37):
	{
		execifge_102610(this_102633);
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(void, start_102637)(Cpu102007* this_102640) {
	{
		while (1) {
			NI64 LOC3;
			LOC3 = 0;
			LOC3 = buffersize_98023();
			if (!((*this_102640).cursor < LOC3)) goto LA2;
			exec_102630(this_102640);
		} LA2: ;
	}
}
void PreMainInner() {
	systemInit000();
	HEX00_parseutilsDatInit000();
	HEX00_strutilsDatInit000();
	HEX00_memoryDatInit000();
	HEX00_instructionsDatInit000();
	HEX00_vmtypesDatInit000();
	HEX00_flagsDatInit000();
	pocketvmDatInit000();
	HEX00_parseutilsInit000();
	HEX00_strutilsInit000();
	HEX00_memoryInit000();
	HEX00_instructionsInit000();
	HEX00_vmtypesInit000();
	HEX00_flagsInit000();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit000();
	inner = PreMainInner;
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	pocketvmInit000();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	(*inner)();
}

int main(void) {
	NimMain();
	return 0;
}

NIM_EXTERNC N_NOINLINE(void, pocketvmInit000)(void) {
	Cpu102007 LOC1;
	NIM_BOOL LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	cpu_102654 = LOC1;
	LOC2 = 0;
	LOC2 = load_102015((&cpu_102654), ((NimStringDesc*) &TMP17));
	start_102637((&cpu_102654));
}

NIM_EXTERNC N_NOINLINE(void, pocketvmDatInit000)(void) {
}

