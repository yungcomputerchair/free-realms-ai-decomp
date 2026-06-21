// addr: 0x01091440
// name: YouTube_Uploader_addUploadRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool YouTube_Uploader_addUploadRequest(void * this, void * a, void * b, void *
   userData) */

bool __thiscall YouTube_Uploader_addUploadRequest(void *this,void *a,void *b,void *userData)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If enabled, allocates a 0x390-byte YouTube upload request/job from uploader
                       fields and submits it through the uploader queue/helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01642dab;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x60) == '\0') {
    return false;
  }
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x390);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01090330(a,b,(int)this + 0x40,(int)this + 0x50,*(undefined4 *)this,
                         *(undefined4 *)((int)this + 8),userData);
  }
  local_4 = 0xffffffff;
  FUN_0108f0e0(uVar2);
  ExceptionList = local_c;
  return true;
}

