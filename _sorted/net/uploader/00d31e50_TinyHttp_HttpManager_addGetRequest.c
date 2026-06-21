// addr: 0x00d31e50
// name: TinyHttp_HttpManager_addGetRequest
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TinyHttp_HttpManager_addGetRequest(void * this, undefined4 url_,
   undefined4 callback_, undefined4 userData_) */

void __thiscall
TinyHttp_HttpManager_addGetRequest
          (void *this,undefined4 url_,undefined4 callback_,undefined4 userData_)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a TinyHttp::HttpManager::GetRequest, links it into
                       the manager request list, increments the request count, and accumulates its
                       size. Evidence is TinyHttp::HttpManager::GetRequest::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016131db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(0x238);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00d31ac0(this,url_,callback_,userData_);
    *puVar1 = TinyHttp::HttpManager::GetRequest::vftable;
  }
  puVar1[0x8c] = *(undefined4 *)((int)this + 0x213c);
  if (*(int *)((int)this + 0x213c) == 0) {
    *(undefined4 **)((int)this + 0x2138) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 0x213c) + 0x234) = puVar1;
  }
  *(int *)((int)this + 0x2140) = *(int *)((int)this + 0x2140) + 1;
  *(undefined4 **)((int)this + 0x213c) = puVar1;
  *(int *)((int)this + 0x2160) = *(int *)((int)this + 0x2160) + puVar1[0x88];
  ExceptionList = local_c;
  return;
}

