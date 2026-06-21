// addr: 0x00f73590
// name: UploaderImpl_addRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool UploaderImpl_addRequest(void * this, void * request, void * callback,
   void * userData) */

bool __thiscall UploaderImpl_addRequest(void *this,void *request,void *callback,void *userData)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Validates that the uploader is configured and the request type is allowed,
                       allocates the appropriate concrete request object, queues it, and logs the
                       documented AddRequest failure messages on error. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162797b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x70) == '\0') {
    pcVar5 = "UploaderImpl::AddRequest, failed with uploader not configured";
  }
  else {
    cVar1 = FUN_00f79a10(*(undefined4 *)((int)this + 8));
    if (cVar1 != '\0') {
      pvVar3 = Mem_Alloc(0x508);
      local_4 = 0;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00f647b0(request,callback,(int)this + 0x4c,(int)this + 0x5c,
                             *(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x14),this
                             ,(int)this + 4,*(undefined4 *)((int)this + 0x6c),userData);
      }
      local_4 = 0xffffffff;
      FUN_00f60d60(uVar4);
      ExceptionList = local_c;
      return true;
    }
    pcVar5 = "UploaderImpl::AddRequest, failed with invalid request";
  }
  FUN_00f99fd0(2,(int)this + 4,pcVar5,uVar2);
  ExceptionList = local_c;
  return false;
}

