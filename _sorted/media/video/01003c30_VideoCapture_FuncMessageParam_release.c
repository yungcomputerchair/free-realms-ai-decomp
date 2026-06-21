// addr: 0x01003c30
// name: VideoCapture_FuncMessageParam_release
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_FuncMessageParam_release(void ** paramSlot) */

void __fastcall VideoCapture_FuncMessageParam_release(void **paramSlot)

{
  int *piVar1;
  int iVar2;
  
                    /* Releases a reference-counted FuncMessage parameter object: waits on
                       synchronization for some states, decrements the refcount, and invokes the
                       virtual destructor when it reaches zero. Evidence: scalar deleting
                       destructors in the FuncMessage area call this helper. */
  piVar1 = *paramSlot;
  iVar2 = piVar1[0xf8];
  if (0 < iVar2) {
    if (iVar2 < 3) {
      FUN_00fc4a80();
    }
    else if (iVar2 != 3) goto LAB_01003c59;
    FUN_00fc4ba0(0xffffffff);
  }
LAB_01003c59:
  LOCK();
  iVar2 = piVar1[1] + -1;
  piVar1[1] = iVar2;
  UNLOCK();
  if (iVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01003c6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))();
  return;
}

