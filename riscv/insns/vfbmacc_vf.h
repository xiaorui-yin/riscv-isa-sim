VI_VFP_VF_BC_LOOP
({
  vd = f16_mulAdd(bc, vs2, rs1);
},
{
  vd = f32_mulAdd(bc, vs2, rs1);
},
{
  vd = f64_mulAdd(bc, vs2, rs1);
})
