// addr: 0x00f992e0
// name: HttpLibrary_HttpConnectionHandlerAdapter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HttpLibrary_HttpConnectionHandlerAdapter_ctor(void * this) */

void * __fastcall HttpLibrary_HttpConnectionHandlerAdapter_ctor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an HttpConnectionHandlerAdapter, assigns its vtable, allocates an
                       internal 400-byte helper, and clears state fields. */
  puStack_8 = &LAB_0162a443;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  *(undefined ***)this = HttpLibrary::HttpConnectionHandlerAdapter::vftable;
  pvVar1 = Mem_Alloc(400);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_00f99160(pvVar1);
  }
  *(void **)((int)this + 4) = pvVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

