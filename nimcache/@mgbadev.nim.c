/* Generated by Nim Compiler v2.0.4 */
/* Compiled for: Standalone, arm, gcc */
/* Command for C compiler:
   /usr/bin/arm-none-eabi-gcc -c -nostdinc -isystem /home/afisher/.nimble/pkgs2/natu-0.2.1-389a3c9b6e3ee0c2fc5c91865455308bc2005952/vendor/acsl/include -mthumb -mthumb-interwork -mcpu=arm7tdmi -g -O2 -ffast-math -Wno-unused-variable -Wno-unused-but-set-variable -Wno-discarded-qualifiers -Wno-incompatible-pointer-types -Wno-stringop-overflow   -I/home/afisher/.choosenim/toolchains/nim-2.0.4/lib -I/home/afisher/.nimble/pkgs2/natu-0.2.1-389a3c9b6e3ee0c2fc5c91865455308bc2005952/vendor/libtonc/include -I/home/afisher/.nimble/pkgs2/natu-0.2.1-389a3c9b6e3ee0c2fc5c91865455308bc2005952/vendor/maxmod/include -I/home/afisher/projects/gbadev/nimcache -I/home/afisher/projects/gbadev/src -o /home/afisher/projects/gbadev/nimcache/@mgbadev.nim.c.o /home/afisher/projects/gbadev/nimcache/@mgbadev.nim.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#include "tonc_tte.h"
#include "tonc_memmap.h"
#include "tonc_types.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
typedef struct DispCnt DispCnt;
struct DispCnt {
	NI mode:3;
	NIM_BOOL gb:1;
	NIM_BOOL page:1;
	NIM_BOOL oamHbl:1;
	NIM_BOOL obj1d:1;
	NIM_BOOL blank:1;
	NIM_BOOL bg0:1;
	NIM_BOOL bg1:1;
	NIM_BOOL bg2:1;
	NIM_BOOL bg3:1;
	NIM_BOOL obj:1;
	NIM_BOOL win0:1;
	NIM_BOOL win1:1;
	NIM_BOOL winObj:1;
	NIM_BOOL gswap:1;
	NU unused:15;
};
typedef NU16 tyArray__GfVb34yyvKRvN9bvme330zw[3];
N_LIB_PRIVATE N_NIMCALL(void, initTte__init_u4)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZOOZOOZOnimbleZpkgs50Znatu4548O50O4945515657a51c57b54e51ee48c50fc53c5749565453525353514856bc50484853575350ZnatuZprivateZmemmap_u439)(OBJ_ATTR* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZOOZOOZOnimbleZpkgs50Znatu4548O50O4945515657a51c57b54e51ee48c50fc53c5749565453525353514856bc50484853575350ZnatuZprivateZmemmap_u469)(OBJ_AFFINE* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotnimbleatspkgs2atsnatuminus0dot2dot1minus389a3c9b6e3ee0c2fc5c91865455308bc2005952atsnatuatsirqdotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotnimbleatspkgs2atsnatuminus0dot2dot1minus389a3c9b6e3ee0c2fc5c91865455308bc2005952atsnatuatsprivateatsessentialsdotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
N_LIB_PRIVATE DispCnt dcntX60gensym0___gbadev_u6;

N_LIB_PRIVATE void PreMainInner(void) {
	atmdotdotatsdotdotatsdotdotatsdotnimbleatspkgs2atsnatuminus0dot2dot1minus389a3c9b6e3ee0c2fc5c91865455308bc2005952atsnatuatsirqdotnim_Init000();
	atmdotdotatsdotdotatsdotdotatsdotnimbleatspkgs2atsnatuminus0dot2dot1minus389a3c9b6e3ee0c2fc5c91865455308bc2005952atsnatuatsprivateatsessentialsdotnim_Init000();
}

N_LIB_PRIVATE int cmdCount;
N_LIB_PRIVATE char** cmdLine;
N_LIB_PRIVATE char** gEnv;
N_LIB_PRIVATE void PreMain(void) {
#if 0
	void (*volatile inner)(void);
	inner = PreMainInner;
	(*inner)();
#else
	PreMainInner();
#endif
}

N_LIB_PRIVATE N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
#if 0
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	(*inner)();
#else
	PreMain();
	NimMainInner();
#endif
}

int main(void) {
	NimMain();
	return 0;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{
	NI T1_;
	dcntX60gensym0___gbadev_u6.bg0 = NIM_TRUE;
	(*(volatile DispCnt*)(0x04000000)) = dcntX60gensym0___gbadev_u6;
	initTte__init_u4();
	T1_ = (NI)0;
	T1_ = tte_write("Hello World!");
	{
		while (1) {
		}
	}
	eqdestroy___OOZOOZOOZOnimbleZpkgs50Znatu4548O50O4945515657a51c57b54e51ee48c50fc53c5749565453525353514856bc50484853575350ZnatuZprivateZmemmap_u439(oam_mem);
	eqdestroy___OOZOOZOOZOnimbleZpkgs50Znatu4548O50O4945515657a51c57b54e51ee48c50fc53c5749565453525353514856bc50484853575350ZnatuZprivateZmemmap_u469(obj_aff_mem);
	eqdestroy___OOZOOZOOZOnimbleZpkgs50Znatu4548O50O4945515657a51c57b54e51ee48c50fc53c5749565453525353514856bc50484853575350ZnatuZprivateZmemmap_u439(oam_mem);
}
}
