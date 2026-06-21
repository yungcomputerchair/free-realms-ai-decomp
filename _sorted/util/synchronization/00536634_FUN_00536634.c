// addr: 0x00536634
// name: FUN_00536634
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_00536634(uint param_1)

{
  int iVar1;
  undefined1 local_8 [4];
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = GWaitForMultipleObjects_waitAny(local_8,1,param_1);
  return iVar1 == 0;
}

