// addr: 0x009cad90
// name: CharacterMovementController_setRailController
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CharacterMovementController_setRailController(void * this, void * a, void
   * b, void * c, void * d) */

void __thiscall
CharacterMovementController_setRailController(void *this,void *a,void *b,void *c,void *d)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Stops/removes the current movement controller, constructs a new small
                       0x10-byte controller object, stores it, then registers it through a virtual
                       callback. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015a3aeb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FUN_00acb430(*(undefined4 *)((int)this + 0xc));
  FUN_00acb430(*(undefined4 *)((int)this + 0x10));
  if (*(int **)this != (int *)0x0) {
    (**(code **)(**(int **)this + 8))(uVar1);
    if (*(undefined4 **)this != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)this)(1);
    }
    *(undefined4 *)this = 0;
  }
  FUN_00acb3e0(*(undefined4 *)((int)this + 0xc));
  FUN_00acb3e0(*(undefined4 *)((int)this + 0x10));
  pvVar2 = Mem_Alloc(0x10);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_009ca7d0(a,b,c,d,this);
  }
  uStack_4 = 0xffffffff;
  *(int **)this = piVar3;
  (**(code **)(*piVar3 + 0x18))((int)this + 0x20);
  ExceptionList = pvVar2;
  return;
}

