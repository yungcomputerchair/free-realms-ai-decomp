// addr: 0x00fdf120
// name: AppPhysics_MeshData_setIndexBuffer
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AppPhysics_MeshData_setIndexBuffer(void * holder, void * indices, int
   count_) */

bool __thiscall AppPhysics_MeshData_setIndexBuffer(void *this,void *holder,void *indices,int count_)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures an AppPhysics_MeshData exists, creates/copies an index buffer from
                       input data, stores the count, clears a dirty flag, and returns success when
                       input is valid. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016302cb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  if ((holder != (void *)0x0) && (0 < (int)indices)) {
    ExceptionList = &local_c;
    if (*(int *)((int)this + 4) == 0) {
      pvVar2 = Mem_Alloc(0x60);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = AppPhysics_MeshData_ctor(pvVar2);
      }
      *(void **)((int)this + 4) = pvVar2;
    }
    local_4 = 0xffffffff;
    uVar4 = ~-(uint)(*(int *)(*(uint *)((int)this + 4) + 4) != 0) & *(uint *)((int)this + 4);
    uVar3 = thunk_FUN_01132fb0(holder,indices,0,uVar1);
    *(undefined4 *)(uVar4 + 0x50) = uVar3;
    *(void **)(uVar4 + 0x4c) = indices;
    *(undefined1 *)(uVar4 + 0x43) = 0;
    ExceptionList = local_c;
    return true;
  }
  return false;
}

