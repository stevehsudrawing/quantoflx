function ConvertTime(n)
	return os.date('%B %d %Y %H:%M:%S', n)
end

function H0(n)
	return os.date('%I %p', n)
end

function H1(n)
	return os.date('%H:%M', n)
end

function W(n)
	return os.date('%A', n)
end

function C(n)
	return os.date('%c', n)
end

function HA0(n)
	return os.date('%I:%M %p', n)
end

function HA1(n)
	return os.date('%H:%M', n)
end