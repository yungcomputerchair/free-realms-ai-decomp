// addr: 0x01535eb0
// name: FUN_01535eb0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01535eb0(undefined4 param_1)

{
  int iVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = FUN_00d8e276(param_1,&stack0x00000008);
  FUN_00d8e222(iVar1 + 0x40);
  iVar1 = FUN_00d8e276(&DAT_01770548);
  FUN_00d8b416(iVar1 + 0x40);
  iVar1 = FUN_00d8e276();
  _fflush((void *)(iVar1 + 0x40));
                    /* WARNING: Subroutine does not return */
  _abort();
}

