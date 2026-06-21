// addr: 0x00ae1860
// name: ClientSteamImpl_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientSteamImpl_create(void * outHolder, bool initializeSteam_) */

void * __thiscall ClientSteamImpl_create(void *this,void *outHolder,bool initializeSteam_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a ClientSteamImpl, constructs it with the requested Steam
                       initialization flag, and stores it in the holder. Constructor callee
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cb64b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientSteamImpl_ctor(pvVar1,this,SUB41(outHolder,0));
  }
  *(void **)this = pvVar1;
  ExceptionList = local_c;
  return this;
}

