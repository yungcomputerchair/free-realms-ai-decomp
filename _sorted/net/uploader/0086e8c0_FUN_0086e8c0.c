// addr: 0x0086e8c0
// name: FUN_0086e8c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0086e8c0(void * list, void * refObj, int a_, int b_, void * matrix,
   void * vec4, int c_, int d_) */

void __thiscall
FUN_0086e8c0(void *this,void *list,void *refObj,int a_,int b_,void *matrix,void *vec4,int c_,int d_)

{
  undefined4 uVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a 0x180-byte record, AddRefs a referenced object, copies
                       matrix/vector data and parameters, then appends it to a linked list. Specific
                       class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01574d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LOCK();
  *(int *)((int)list + 4) = *(int *)((int)list + 4) + 1;
  UNLOCK();
  this_00 = Mem_Alloc(0x180);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0086e2c0(this_00);
  }
  puVar2[3] = a_;
  puVar2[0x18] = list;
  puVar2[2] = refObj;
  puVar4 = puVar2 + 4;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)b_;
    b_ = (int)(b_ + 4);
    puVar4 = puVar4 + 1;
  }
  puVar2[0x14] = *(undefined4 *)matrix;
  puVar2[0x15] = *(undefined4 *)((int)matrix + 4);
  puVar2[0x16] = *(undefined4 *)((int)matrix + 8);
  uVar1 = *(undefined4 *)((int)matrix + 0xc);
  puVar2[0x5d] = vec4;
  puVar2[0x17] = uVar1;
  puVar2[0x5e] = c_;
  *puVar2 = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) == 0) {
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 0xc) + 4) = puVar2;
  }
  *(undefined4 **)((int)this + 0xc) = puVar2;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  ExceptionList = local_c;
  return;
}

