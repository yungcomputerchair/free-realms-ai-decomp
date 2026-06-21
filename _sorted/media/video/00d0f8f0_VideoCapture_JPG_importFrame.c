// addr: 0x00d0f8f0
// name: VideoCapture_JPG_importFrame
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_JPG_importFrame(void * this, void * source) */

int __thiscall VideoCapture_JPG_importFrame(void *this,void *source)

{
  bool bVar1;
  char cVar2;
  void *scratch;
  void *this_00;
  void **slot;
  int iVar3;
  void **slot_00;
  int *piVar4;
  int *piVar5;
  undefined4 local_74;
  void **local_70 [2];
  int *local_68 [2];
  void **local_60 [2];
  int local_58 [7];
  int local_3c;
  int local_38;
  int local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Imports a JPG/image frame: validates settings, decodes source data,
                       checks/converts dimensions, acquires a buffer from the pool, copies frame
                       metadata into this, and stores the current frame/resource. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01612bc6;
  local_c = ExceptionList;
  scratch = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff7c);
  ExceptionList = &local_c;
  bVar1 = VideoCapture_JPG_validateImageSettings(source);
  if (bVar1) {
    local_74 = 0;
    this_00 = Mem_Alloc(4);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      slot = (void **)0x0;
    }
    else {
      slot = VideoCapture_JPG_ScratchBuffer_ctor(this_00);
    }
    local_4 = 1;
    if (slot != (void **)0x0) {
      local_60[0] = slot;
      iVar3 = FUN_00d2dbe0(source,&local_74);
      if (iVar3 == 0) {
        FUN_00d10dd0();
        local_4._0_1_ = 2;
        cVar2 = FUN_00d0ff10(*(undefined4 *)((int)source + 0x18),*(undefined4 *)((int)source + 0x1c)
                             ,*(undefined4 *)((int)source + 0x20),4,
                             *(undefined4 *)((int)source + 0x2c),*(undefined4 *)((int)source + 0x30)
                             ,*(undefined4 *)((int)source + 0x20),4,
                             *(undefined4 *)((int)source + 0x3c),0,0);
        if (cVar2 != '\0') {
          slot_00 = (void **)0x0;
          source = (void *)0x0;
          if ((local_58[0] != local_3c) || (local_58[1] != local_38)) {
            source = VideoCapture_JPG_selectScaleConvertRoutine(local_58);
          }
          local_70[0] = Mem_Alloc(0xb8);
          local_4._0_1_ = 3;
          if (local_70[0] != (void **)0x0) {
            slot_00 = VideoCapture_BufferPool_ctor(local_70[0],local_28,0);
          }
          local_68[0] = (int *)0x0;
          local_4._0_1_ = 5;
          local_70[0] = slot_00;
          iVar3 = VideoCapture_BufferPool_acquire(slot_00,local_68);
          if (-1 < iVar3) {
            local_60[0] = (void **)0x0;
            VideoCapture_JPG_ScratchBufferPtr_assignDeleting((void *)((int)this + 4),slot,scratch);
            piVar4 = local_58;
            piVar5 = (int *)((int)this + 0xc);
            for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar5 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            }
            *(undefined4 *)((int)this + 0x58) = 0;
            *(void **)((int)this + 0x5c) = source;
            local_70[0] = (void **)0x0;
            VideoCapture_BufferPoolPtr_assignDeleting((void *)((int)this + 0x60),slot_00,scratch);
            piVar4 = local_68[0];
            local_68[0] = (int *)0x0;
            FUN_00d0b6f0(piVar4);
            local_4._0_1_ = 4;
            if (local_68[0] != (int *)0x0) {
              (**(code **)(*local_68[0] + 4))();
            }
            local_4._0_1_ = 2;
            VideoCapture_BufferPool_deleteOwned(local_70);
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00d0feb0();
            local_4 = 0xffffffff;
            VideoCapture_JPG_ScratchBuffer_deleteOwned(local_60);
            ExceptionList = local_c;
            return 0;
          }
          local_4._0_1_ = 4;
          if (local_68[0] != (int *)0x0) {
            (**(code **)(*local_68[0] + 4))();
          }
          local_4._0_1_ = 2;
          VideoCapture_BufferPool_deleteOwned(local_70);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00d0feb0();
          local_4 = 0xffffffff;
          VideoCapture_JPG_ScratchBuffer_deleteOwned(local_60);
          ExceptionList = local_c;
          return -1;
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00d0feb0();
      }
      local_4 = 0xffffffff;
      FUN_00d2df00();
                    /* WARNING: Subroutine does not return */
      _free(slot);
    }
  }
  ExceptionList = local_c;
  return -1;
}

