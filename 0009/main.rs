fn main()
{
	let sum: i64 = 1000;

	for a in 1..sum
	{
		for b in 1..sum
		{
			let c2: f64 = a.pow(2) as f64 + b.pow(2) as f64;
			let c: i64 = 
				if c2.sqrt().floor() == c2.sqrt()
				{
					c2.sqrt().floor() as i64
				} else
				{
					0
				};
			if c != 0 && a+ b + c == sum
			{
				println!("a is {}, b is {}, c is {}\nproduct is {}", a, b, c, a*b*c);
			}
		}
	}
}
