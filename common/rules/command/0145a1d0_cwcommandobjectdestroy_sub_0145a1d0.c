// addr: 0x0145a1d0
// name: cwcommandobjectdestroy_sub_0145a1d0
// subsystem: common/rules/command
// source (binary assert): common/rules/command/cwcommandobjectdestroy.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void cwcommandobjectdestroy_sub_0145a1d0(int * param_1, undefined4 param_2_)
    */

void __thiscall cwcommandobjectdestroy_sub_0145a1d0(void *this,int *param_1,undefined4 param_2_)

{
  int *stream;
  char cVar1;
  char extraout_AL;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path ..\\common\\rules\\command\\cwcommandobjectdestroy.cpp; strings
                       false, false. */
  stream = param_1;
  cVar1 = (**(code **)(*(int *)this + 0x10))(param_1,&param_1);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\command\\cwcommandobjectdestroy.cpp",0x77);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\command\\cwcommandobjectdestroy.cpp",0x7a);
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

