// addr: 0x00f73ad0
// name: UploaderImpl_addRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool UploaderImpl_addRequest(void * this, void * request, void * callback,
   void * userData) */

bool __thiscall UploaderImpl_addRequest(void *this,void *request,void *callback,void *userData)

{
  bool bVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Validates that the uploader is configured and the request type is allowed,
                       allocates the appropriate concrete request object, queues it, and logs the
                       documented AddRequest failure messages on error. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01627a9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x70) == '\0') {
    pcVar4 = "UploaderImpl::AddRequest, failed with uploader not configured";
  }
  else {
    bVar1 = CountryCodesRequest_validate
                      (callback,*(int *)((int)this + 8),
                       (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec));
    if (bVar1) {
      pvVar2 = Mem_Alloc(1000);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00f69430(request,callback,(int)this + 0x4c,(int)this + 0x5c,
                             *(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x14),this
                             ,(int)this + 4,*(undefined4 *)((int)this + 0x6c),userData);
      }
      local_4 = 0xffffffff;
      FUN_00f60d60(uVar3);
      ExceptionList = local_c;
      return true;
    }
    pcVar4 = "UploaderImpl::AddRequest, failed with invalid request";
  }
  FUN_00f99fd0(2,(int)this + 4,pcVar4);
  ExceptionList = local_c;
  return false;
}

