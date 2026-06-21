// addr: 0x012ab9f0
// name: CollectionDB_insertCollection
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionDB_insertCollection(void * this, void * collection) */

bool __thiscall CollectionDB_insertCollection(void *this,void *collection)

{
  undefined1 uVar1;
  void *buffer;
  void *pvVar2;
  
                    /* Persists/inserts a Collection into mDBMStorage using its property-list key
                       and serialized buffer. */
  if (collection == (void *)0x0) {
    FUN_012f5a60("collection","..\\common\\common\\property\\CollectionDB.cpp",0x107);
  }
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\CollectionDB.cpp",0x108);
  }
  buffer = (void *)(**(code **)(*(int *)collection + 0x28))(0);
  pvVar2 = Collection_getPropertyList(collection);
  uVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0xc))(pvVar2,buffer);
  if (buffer != (void *)0x0) {
    RawBuffer_free(buffer);
                    /* WARNING: Subroutine does not return */
    _free(buffer);
  }
  return (bool)uVar1;
}

