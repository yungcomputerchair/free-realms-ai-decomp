// addr: 0x0109dfa0
// name: AssetManagement_AssetDeliveryDirect_FileLoader_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AssetManagement_AssetDeliveryDirect_FileLoader_ctor(void * this, void *
   owner) */

void * __thiscall AssetManagement_AssetDeliveryDirect_FileLoader_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an AssetDeliveryDirect::FileLoader, initializes its base, installs
                       the FileLoader vtable, zeros fields, and increments the referenced owner's
                       refcount. This is likely outside uploader. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01645098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc4cc0(0,2,0);
  *(undefined ***)this = AssetManagement::AssetDeliveryDirect::FileLoader::vftable;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  LOCK();
  *(int *)((int)owner + 4) = *(int *)((int)owner + 4) + 1;
  UNLOCK();
  *(void **)((int)this + 0xcc) = owner;
  ExceptionList = local_c;
  return this;
}

