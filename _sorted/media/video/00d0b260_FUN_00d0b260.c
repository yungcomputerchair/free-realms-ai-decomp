// addr: 0x00d0b260
// name: FUN_00d0b260
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_00d0b260(int *param_1,void *param_2)

{
  int iVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = VideoCapture_BufferPool_acquire(*(void **)(*param_1 + 8),param_2);
  return (-1 < iVar1) - 1 & 0xfffffffe;
}

