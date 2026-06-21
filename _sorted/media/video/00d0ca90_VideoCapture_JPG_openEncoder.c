// addr: 0x00d0ca90
// name: VideoCapture_JPG_openEncoder
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_JPG_openEncoder(void * this, void * settings) */

int __thiscall VideoCapture_JPG_openEncoder(void *this,void *settings)

{
  int *piVar1;
  bool bVar2;
  void *encoder;
  int iVar3;
  void *pvVar4;
  void **extraout_EAX;
  void **extraout_EAX_00;
  void **ppvVar5;
  int *local_1c [2];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Opens a JPG encoder/backend from validated settings, selecting a concrete
                       backend by settings type, initializing it, then creating frame/queue support
                       objects and transitioning state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01612674;
  local_c = ExceptionList;
  encoder = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  ExceptionList = &local_c;
  if ((*(int *)((int)this + 0x18) == 0) || (*(int *)((int)this + 0x18) == 2)) {
    bVar2 = VideoCapture_JPG_validateImageSettings(settings);
    if (bVar2) {
      local_1c[0] = (int *)0x0;
      local_4 = 0;
      if (*(int *)((int)settings + 0x28) == 1) {
        pvVar4 = Mem_Alloc(0x70);
        local_4._0_1_ = 1;
        if (pvVar4 == (void *)0x0) {
          local_4._0_1_ = 0;
          local_1c[0] = (int *)0x0;
        }
        else {
          local_1c[0] = ImageCapture_JPG_JPGEncoder_ctor(pvVar4);
          local_4._0_1_ = 0;
        }
      }
      else {
        if (*(int *)((int)settings + 0x28) != 2) {
          ExceptionList = local_c;
          return -1;
        }
        pvVar4 = Mem_Alloc(0x18);
        local_4._0_1_ = 2;
        if (pvVar4 == (void *)0x0) {
          ppvVar5 = (void **)0x0;
        }
        else {
          ImageCapture_PNG_PNGEncoder_ctor(pvVar4);
          ppvVar5 = extraout_EAX;
        }
        local_4._0_1_ = 0;
        ImageCapture_IEncoderPtr_assignDeleting(local_1c,ppvVar5,encoder);
      }
      piVar1 = local_1c[0];
      iVar3 = (**(code **)(*local_1c[0] + 4))(settings);
      if (iVar3 == 0) {
        pvVar4 = Mem_Alloc(0xb8);
        local_4._0_1_ = 3;
        if (pvVar4 == (void *)0x0) {
          settings = (void *)0x0;
        }
        else {
          settings = VideoCapture_BufferPool_ctor(pvVar4,*(int *)((int)settings + 0x24),0);
        }
        pvStack_14 = settings;
        local_4._0_1_ = 4;
        pvVar4 = Mem_Alloc(0x1c);
        local_4._0_1_ = 5;
        if (pvVar4 == (void *)0x0) {
          ppvVar5 = (void **)0x0;
        }
        else {
          ImageCapture_JobRec_init(pvVar4);
          ppvVar5 = extraout_EAX_00;
        }
        local_4 = CONCAT31(local_4._1_3_,6);
        VideoCapture_JPG_resetEncodeQueue(ppvVar5,(void *)0x0);
        local_1c[0] = (int *)0x0;
        if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)this + 0x10))(1);
          *(undefined4 *)((int)this + 0x10) = 0;
        }
        *(int **)((int)this + 0x10) = piVar1;
        pvStack_14 = (void *)0x0;
        VideoCapture_BufferPoolPtr_assignDeleting((void *)((int)this + 8),settings,encoder);
        ImageCapture_JobRecPtr_assignDeleting(this,ppvVar5,encoder);
        *(undefined4 *)((int)this + 0x18) = 1;
        iVar3 = 0;
      }
      else {
        local_4 = 0xffffffff;
        (**(code **)*piVar1)(1);
      }
    }
    else {
      iVar3 = -1;
    }
  }
  else {
    iVar3 = -5;
  }
  ExceptionList = local_c;
  return iVar3;
}

