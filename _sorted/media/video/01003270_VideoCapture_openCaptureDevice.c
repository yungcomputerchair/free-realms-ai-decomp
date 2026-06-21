// addr: 0x01003270
// name: VideoCapture_openCaptureDevice
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_openCaptureDevice(void * this, void * settings) */

int __thiscall VideoCapture_openCaptureDevice(void *this,void *settings)

{
  char cVar1;
  void *context;
  int iVar2;
  void *pvVar3;
  void **slot;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Validates current capture state and input settings, creates a 0x578-byte
                       backend object for settings type 1, initializes it from the settings, stores
                       it, and transitions state on success. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01631d43;
  local_c = ExceptionList;
  context = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  ExceptionList = &local_c;
  if ((*(int *)((int)this + 0x98) == 0) || (*(int *)((int)this + 0x98) == 6)) {
    cVar1 = FUN_01001a70();
    if (cVar1 == '\0') {
      iVar2 = -1;
    }
    else {
      local_4 = 0;
      if (*(int *)((int)settings + 0x38) == 1) {
        pvVar3 = Mem_Alloc(0x578);
        local_4._0_1_ = 1;
        if (pvVar3 == (void *)0x0) {
          slot = (void **)0x0;
        }
        else {
          slot = (void **)FUN_0100bfe0();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar2 = (**(code **)((int)*slot + 4))(settings);
        if (iVar2 == 0) {
          VideoCapture_EncoderContextPtr_assignDeleting((void *)((int)this + 0x88),slot,context);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0x94) = 0;
          FUN_010027e0(1);
          iVar2 = 0;
        }
        else {
          local_4 = 0xffffffff;
          (**(code **)*slot)(1);
        }
      }
      else {
        iVar2 = -1;
      }
    }
  }
  else {
    iVar2 = -5;
  }
  ExceptionList = local_c;
  return iVar2;
}

