// addr: 0x00fdfd90
// name: AppPhysics_MeshData_setGeometry
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_MeshData_setGeometry(void * holder, void * a, void * b, void *
   c, void * d, bool flagA_, bool flagB_) */

void __thiscall
AppPhysics_MeshData_setGeometry
          (void *this,void *holder,void *a,void *b,void *c,void *d,bool flagA_,bool flagB_)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures an AppPhysics_MeshData exists, writes geometry fields and flags,
                       calls mesh update helpers, and marks the holder valid. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163040b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
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
  uVar3 = ~-(uint)(*(int *)(*(uint *)((int)this + 4) + 4) != 0) & *(uint *)((int)this + 4);
  *(void **)(uVar3 + 0xc) = holder;
  *(void **)(uVar3 + 8) = a;
  *(void **)(uVar3 + 0x10) = c;
  *(undefined1 *)(uVar3 + 0x40) = d._0_1_;
  *(undefined1 *)(uVar3 + 0x42) = 0;
  *(void **)(uVar3 + 0x14) = b;
  *(bool *)(uVar3 + 0x41) = flagA_;
  FUN_00af22f0(uVar1);
  FUN_00fdf970();
  *(undefined4 *)((int)this + 8) = 1;
  ExceptionList = local_c;
  return;
}

