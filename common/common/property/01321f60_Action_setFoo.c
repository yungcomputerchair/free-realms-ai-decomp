// addr: 0x01321f60
// name: Action_setFoo
// subsystem: common/common/property
// source (binary assert): common/common/property/Action.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Action_setFoo(void * this, void * foo) */

void __thiscall Action_setFoo(void *this,void *foo)

{
                    /* Sets Action selector 0x11 through the virtual setter slot after asserting the
                       foo pointer is non-null. Callers compare the current selector-0x11 value and
                       update it when it differs. */
  if (foo == (void *)0x0) {
    FUN_012f5a60("foo != 0","..\\common\\common\\property\\Action.cpp",0xe6);
  }
  (**(code **)(*(int *)this + 0x54))(0x11,foo);
  return;
}

