// addr: 0x0123bd00
// name: Streaming_SOEAssetLoaderHandler_createGlobal
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Streaming_SOEAssetLoaderHandler_createGlobal(void * arg) */

void __cdecl Streaming_SOEAssetLoaderHandler_createGlobal(void *arg)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a Streaming::SOEAssetLoaderHandler and stores it in global
                       DAT_01cbcc80. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0165315b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = Mem_Alloc(8);
  local_4 = 0;
  if (this == (void *)0x0) {
    DAT_01cbcc80 = (void *)0x0;
  }
  else {
    DAT_01cbcc80 = Streaming_SOEAssetLoaderHandler_ctor(this,arg);
  }
  ExceptionList = local_c;
  return;
}

