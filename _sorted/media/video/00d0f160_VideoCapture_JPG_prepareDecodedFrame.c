// addr: 0x00d0f160
// name: VideoCapture_JPG_prepareDecodedFrame
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_JPG_prepareDecodedFrame(void * this, void * source) */

int __thiscall VideoCapture_JPG_prepareDecodedFrame(void *this,void *source)

{
  void *pvVar1;
  bool bVar2;
  void *frame;
  void *pvVar3;
  int iVar4;
  void **slot;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = source;
                    /* Validates JPG/image settings, allocates a 0x68-byte decode helper, decodes or
                       loads a frame, and stores the resulting buffer pointers on success. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01612a6b;
  local_c = ExceptionList;
  frame = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  bVar2 = VideoCapture_JPG_validateImageSettings(source);
  if (bVar2) {
    slot = (void **)0x0;
    source = (void *)0x0;
    pvVar3 = Mem_Alloc(0x68);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      slot = (void **)FUN_00d0e1e0();
    }
    local_4 = 1;
    if (slot != (void **)0x0) {
      iVar4 = FUN_00d0e2e0(pvVar1,&source);
      if (iVar4 == 0) {
        FUN_008bb7b0(source);
        local_4._0_1_ = 2;
        if (local_14 != 0) {
          VideoCapture_DecodedFramePtr_assignDeleting((void *)((int)this + 4),slot,frame);
          *(int *)((int)this + 0x10) = local_14;
          *(undefined4 *)((int)this + 0x14) = local_10;
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_008c6d90();
          ExceptionList = local_c;
          return 0;
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_008c6d90();
      }
      local_4 = 0xffffffff;
      FUN_00d0e250();
                    /* WARNING: Subroutine does not return */
      _free(slot);
    }
  }
  ExceptionList = local_c;
  return -1;
}

