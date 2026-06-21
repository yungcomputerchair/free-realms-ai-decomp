// addr: 0x00fda150
// name: AppPhysics_CollisionObjectMap_insert
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint * AppPhysics_CollisionObjectMap_insert(void * this, uint * key, uint *
   value) */

uint * __thiscall AppPhysics_CollisionObjectMap_insert(void *this,uint *key,uint *value)

{
  uint *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Inserts a key/value pair into a 1024-bucket hash table using key & 0x3ff and
                       returns a pointer to the stored value. Used while registering physics objects
                       into the AppPhysics world lookup. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0162f7a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (uint *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = *key;
    puVar1[1] = *value;
  }
  puVar1[2] = *(uint *)((int)this + (*puVar1 & 0x3ff) * 4 + 0xc);
  *(uint **)((int)this + (*puVar1 & 0x3ff) * 4 + 0xc) = puVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  ExceptionList = local_c;
  return puVar1 + 1;
}

